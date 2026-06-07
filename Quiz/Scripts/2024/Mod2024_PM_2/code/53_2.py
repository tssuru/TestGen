try:
    def f():
        try:
            res = 5!=2
        except BaseException: return 4
        except KeyboardInterrupt: return 7
        finally: return 25
        return res
    
    print(f())
    
except: print('error')
