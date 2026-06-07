try:
    def f():
        try:
            res = 3<=5
            return 44
        except KeyboardInterrupt: return 8
        except ValueError: return 9
        return res
    
    print(f())
    
except: print('error')
