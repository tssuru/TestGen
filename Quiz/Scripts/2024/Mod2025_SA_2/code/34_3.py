try:
    def f():
        try:
            res = int("9")
        except BaseException: 
            return 8
        except TypeError: 
            return 0
        else: return 35
        finally: return 25
        return res
    
    print(f())
except: print('error')
