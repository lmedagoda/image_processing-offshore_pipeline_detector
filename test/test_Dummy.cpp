#include <boost/test/unit_test.hpp>
#include <offshore_pipeline_detector/Dummy.hpp>

using namespace offshore_pipeline_detector;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    offshore_pipeline_detector::DummyClass dummy;
    dummy.welcome();
}
