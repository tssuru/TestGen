try:
    def f():
        try:
            res = int("d5")
        except ValueError: return 4
        except TypeError: return 8
        else: return 30
        finally: return 23
        return res
    
    print(f())
    
except: print('error')
