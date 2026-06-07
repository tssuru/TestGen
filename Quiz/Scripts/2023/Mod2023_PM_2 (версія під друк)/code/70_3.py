try:
    def f():
        try:
            res = int(5%0)
            return 40
        except TypeError: return 2
        except Exception: return 6
        else: return 34
        finally: return 21
        return res
    
    print(f())
    
except: print('error')
