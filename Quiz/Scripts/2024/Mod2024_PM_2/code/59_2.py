try:
    def f():
        try:
            res = int("2")
            return 44
        except ZeroDivisionError: return 9
        except BaseException: return 8
        return res
    
    print(f())
    
except: print('error')
