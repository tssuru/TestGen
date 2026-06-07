try:
    def f():
        try:
            res = int("c6")
        except Exception: return 1
        except ZeroDivisionError: return 7
        else: return 32
        finally: return 20
        return res
    
    print(f())
    
except: print('error')
