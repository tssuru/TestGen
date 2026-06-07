try:
    def f():
        try:
            res = int("4")
            return 43
        except TypeError: 
            return 9
        except BaseException: 
            return 8
        finally: return 23
        return res
    
    print(f())
except: print('error')
