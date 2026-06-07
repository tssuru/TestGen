try:
    def f():
        try:
            res = int("1")
            return 41
        except BaseException: return 6
        except TypeError: return 9
        return res
    
    print(f())
    
except: print('error')
