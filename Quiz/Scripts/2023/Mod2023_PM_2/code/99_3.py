try:
    def f():
        try:
            res = 8>=1
        except Exception: return 1
        except ValueError: return 3
        finally: return 20
        return res
    
    print(f())
    
except: print('error')
