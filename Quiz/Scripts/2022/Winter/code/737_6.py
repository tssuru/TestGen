try:
    a,b,c=2,6,7
    def h(b):
        global c
        a=5
        b=3
        c=1
        return a+b+c
    
    a,b,c=9,1,2
    print(h(a),a,b,c)
    
except: print('error')
