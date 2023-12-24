#ifndef USERDATA_H
#define USERDATA_H
#include <QSettings>

class UserData {
public:

     // Singleton pattern to ensure a single instance of UserData
    static UserData& instance() {
        static UserData instance;
        return instance;
    }

    QString name() const { return _name; }
    void setName(const QString& name) { _name = name; }

    int hotelCost() const { return _hotelCost; }
    void setHotelCost(int hotelCost) { _hotelCost = hotelCost; }

    int tourCost() const { return _tourCost; }
    void setTourCost(int tourCost) { _tourCost = tourCost; }

    QString packagetype() const { return _packagetype; }
    void setPackagetype(const QString& packagetype) { _packagetype = packagetype; }

    int indoorCost() const { return _indoorCost; }
    void setIndoorCost(int indoorCost) { _indoorCost = indoorCost; }

    int outdoorCost() const { return _outdoorCost; }
    void setOutdoorCost(int outdoorCost) { _outdoorCost = outdoorCost; }

    int sightseeingCost() const { return _sightseeingCost; }
    void setSightseeingCost(int sightseeingCost) { _sightseeingCost = sightseeingCost; }



private:

    // Private constructor for singleton pattern
    UserData() {}

     // Member variables to store user data
    QString _name;
    int _hotelCost = 0;
    int _tourCost = 0;
    QString _packagetype;
    int _indoorCost = 0;
    int _outdoorCost = 0;
    int _sightseeingCost = 0;
};

#endif // USERDATA_H
