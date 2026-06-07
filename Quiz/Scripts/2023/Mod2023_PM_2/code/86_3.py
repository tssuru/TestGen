try:
    def f():
        try:
            res = int("b2")
        except BaseException: return 7
        except TypeError: return 6
        else: return 35
        return res
    
    print(f())
    
except: print('error')
