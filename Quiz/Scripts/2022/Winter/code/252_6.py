try:
    a,b,c=0,5,7
    def h(b):
        global c
        a*=4
        b=5
        c=1
        return a+b+c
    
    a,b,c=6,9,2
    print(h(a),a,b,c)
    
except: print('error')
