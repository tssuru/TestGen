try:
    def f():
        try:
            res = int(9//2)
            return 40
        except Exception: return 1
        except ValueError: return 6
        else: return 34
        finally: return 24
        return res
    
    print(f())
    
except: print('error')
