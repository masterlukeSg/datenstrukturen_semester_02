namespace ProjectAlpha
{

    template <class T, class prio>
    class PriorityqueueTemplate
    {

    public:
        virtual int get_size() = 0;
        virtual void insert(T, prio) = 0;
        virtual T extract_top() = 0;
    };

}