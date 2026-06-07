try:
    def f():
        try:
            res = int("3")
        except ZeroDivisionError: return 1
        except Exception: return 8
        finally: return 21
        return res
    
    print(f())
    
except: print('error')
