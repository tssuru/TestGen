try:
    def f():
        try:
            res = int("d0")
        except KeyboardInterrupt: return 4
        except Exception: return 5
        else: return 32
        return res
    
    print(f())
    
except: print('error')
