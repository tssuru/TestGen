try:
    def f():
        try:
            res = int(0%1)
        except BaseException: return 8
        except ZeroDivisionError: return 6
        else: return 32
        finally: return 21
        return res
    
    print(f())
    
except: print('error')
