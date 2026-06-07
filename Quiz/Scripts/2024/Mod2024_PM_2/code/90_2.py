try:
    def f():
        try:
            res = int("b4")
            return 45
        except BaseException: return 1
        except ValueError: return 9
        else: return 33
        return res
    
    print(f())
    
except: print('error')
