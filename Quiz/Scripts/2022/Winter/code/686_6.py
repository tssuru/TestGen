try:
    a,b,c=8,3,6
    def h(b):
        global c
        a*=4
        b=1
        c=3
        return a+b+c
    
    a,b,c=0,7,2
    print(h(a),a,b,c)
    
except: print('error')
