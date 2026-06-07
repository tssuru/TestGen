try:
    def f():
        try:
            res = int(5//2)
            return 40
        except KeyboardInterrupt: return 7
        except Exception: return 7
        else: return 35
        return res
    
    print(f())
    
except: print('error')
