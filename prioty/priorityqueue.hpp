#include <priorityqueueTemplate.hpp>
#include <vector>
namespace ProjectAlpha
{
    template <class T, class priority>
    class priorityqueue : public priorityqueueTemplate<T, priority>
    {

    public:
        int get_size() override;
        Iterator get_Iter() override;
        void insert(T, priority) override;
        T extract_top() override;

    private:
        std::vector queue;
    };
}