#ifndef NEWQMESSAGEBOX_H
#define NEWQMESSAGEBOX_H
#include <QDialog>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QComboBox>


class NewQMessageBox : public QDialog{
        Q_OBJECT

    public:
        NewQMessageBox(QWidget *parent = nullptr) : QDialog(parent) {
            setWindowTitle("Message Box");

            QVBoxLayout *mainLayout = new QVBoxLayout(this);

            label = new QLabel("Enter your text:", this);
            mainLayout->addWidget(label);

            comboBox = new QComboBox(this);
            mainLayout->addWidget(comboBox);

            QHBoxLayout *buttonLayout = new QHBoxLayout;
            QPushButton *okButton = new QPushButton("OK", this);
            QPushButton *cancelButton = new QPushButton("Cancel", this);

            buttonLayout->addWidget(okButton);
            buttonLayout->addWidget(cancelButton);
            mainLayout->addLayout(buttonLayout);

            connect(okButton, &QPushButton::clicked, this, &NewQMessageBox::accept);
            connect(cancelButton, &QPushButton::clicked, this, &NewQMessageBox::reject);
        }
        QString getSelectedItem() const {
            return comboBox->currentText();
        }
        void addItem (QString item) {
            comboBox->addItem(item);
        }
        void setLabelText (QString text) {
            label->setText(text);
        }

    private:
        QComboBox *comboBox;
        QLabel *label;
};

#endif // NEWQMESSAGEBOX_H
