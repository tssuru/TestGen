try:
    def f():
        try:
            res = int(3%2)
        except Exception: return 6
        except KeyboardInterrupt: return 0
        else: return 30
        return res
    
    print(f())
    
except: print('error')
