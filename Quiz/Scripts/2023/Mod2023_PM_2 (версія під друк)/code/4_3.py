try:
    def f():
        try:
            res = int(8//2)
        except KeyboardInterrupt: return 6
        except ValueError: return 3
        return res
    
    print(f())
    
except: print('error')
