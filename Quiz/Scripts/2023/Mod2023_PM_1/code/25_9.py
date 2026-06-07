try:
    a,b,c=0,7,2
    def h(a):
        a=3
        b=1
        c=2
        return a+b+c
    
    a,b,c=9,0,6
    print(h(a),a,b,c)
    
except: print('error')
