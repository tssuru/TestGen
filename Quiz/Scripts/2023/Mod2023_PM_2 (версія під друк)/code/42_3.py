try:
    def f():
        try:
            res = int("3")
        except BaseException: return 7
        except TypeError: return 5
        else: return 35
        return res
    
    print(f())
    
except: print('error')
