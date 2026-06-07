try:
    a,b,c=6,7,2
    def h(b):
        global c
        a=3
        b*=2
        c=3
        return a+b+c
    
    a,b,c=4,8,9
    print(h(a),a,b,c)
    
except: print('error')
