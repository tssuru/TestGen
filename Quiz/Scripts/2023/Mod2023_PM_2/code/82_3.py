try:
    def f():
        try:
            res = 4==3
        except ValueError: return 6
        except Exception: return 9
        finally: return 21
        return res
    
    print(f())
    
except: print('error')
