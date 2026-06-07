try:
    def f():
        try:
            res = int(3%0.0)
        except KeyboardInterrupt: 
            return 9
        except Exception: 
            return 5
        else: return 30
        return res
    
    print(f())
except: print('error')
