try:
    def f():
        try:
            res = 5<=1
        except ValueError: 
            return 1
        except KeyboardInterrupt: 
            return 2
        finally: return 20
        return res
    
    print(f())
except: print('error')
