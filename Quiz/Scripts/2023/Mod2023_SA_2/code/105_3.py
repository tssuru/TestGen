try:
    def f():
        try:
            res = int("c5")
            return 42
        except ValueError: return 4
        except BaseException: return 6
        return res
    
    print(f())
    
except: print('error')
