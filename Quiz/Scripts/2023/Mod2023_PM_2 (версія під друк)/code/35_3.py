try:
    def f():
        try:
            res = 0!=7
        except TypeError: return 5
        except BaseException: return 7
        else: return 35
        finally: return 23
        return res
    
    print(f())
    
except: print('error')
