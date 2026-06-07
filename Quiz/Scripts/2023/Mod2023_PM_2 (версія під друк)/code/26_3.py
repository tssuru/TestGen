try:
    def f():
        try:
            res = int(0/2)
            return 41
        except Exception: return 8
        except ValueError: return 9
        else: return 30
        finally: return 20
        return res
    
    print(f())
    
except: print('error')
