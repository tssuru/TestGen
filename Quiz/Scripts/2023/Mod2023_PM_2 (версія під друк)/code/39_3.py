try:
    def f():
        try:
            res = int("b0")
        except Exception: return 9
        except TypeError: return 5
        else: return 30
        finally: return 20
        return res
    
    print(f())
    
except: print('error')
