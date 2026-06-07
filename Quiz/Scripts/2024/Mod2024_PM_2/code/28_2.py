try:
    def f():
        try:
            res = int(7//2)
        except ValueError: return 5
        except TypeError: return 4
        else: return 34
        finally: return 20
        return res
    
    print(f())
    
except: print('error')
