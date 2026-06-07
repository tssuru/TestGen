try:
    def f():
        try:
            res = int("3")
            return 43
        except BaseException: return 4
        except TypeError: return 9
        finally: return 25
        return res
    
    print(f())
    
except: print('error')
