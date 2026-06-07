try:
    def f():
        try:
            res = int("a5")
            return 41
        except BaseException: return 9
        except TypeError: return 3
        else: return 32
        finally: return 23
        return res
    
    print(f())
    
except: print('error')
