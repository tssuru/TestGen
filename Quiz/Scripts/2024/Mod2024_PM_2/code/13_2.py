try:
    def f():
        try:
            res = int(7//2)
        except KeyboardInterrupt: return 3
        except Exception: return 6
        return res
    
    print(f())
    
except: print('error')
