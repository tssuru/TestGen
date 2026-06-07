try:
    def f():
        try:
            res = int(2//0)
        except KeyboardInterrupt: return 6
        except Exception: return 9
        else: return 33
        return res
    
    print(f())
    
except: print('error')
