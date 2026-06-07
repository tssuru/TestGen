try:
    def f():
        try:
            res = int("8")
            return 43
        except BaseException: return 1
        except ZeroDivisionError: return 3
        else: return 35
        finally: return 20
        return res
    
    print(f())
    
except: print('error')
