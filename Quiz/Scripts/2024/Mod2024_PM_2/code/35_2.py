try:
    def f():
        try:
            res = int("a0")
        except Exception: return 8
        except TypeError: return 2
        else: return 32
        finally: return 22
        return res
    
    print(f())
    
except: print('error')
