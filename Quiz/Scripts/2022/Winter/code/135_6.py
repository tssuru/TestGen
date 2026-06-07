try:
    a,b,c=4,5,6
    def h(b):
        global c
        a*=3
        b=5
        c=4
        return a+b+c
    
    a,b,c=0,9,1
    print(h(a),a,b,c)
    
except: print('error')
