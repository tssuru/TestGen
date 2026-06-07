try:
    def f():
        try:
            res = int("2")
            return 44
        except BaseException: return 8
        except ValueError: return 4
        else: return 33
        return res
    
    print(f())
    
except: print('error')
