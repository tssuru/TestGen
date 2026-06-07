try:
    a,b,c=2,4,6
    def h(b):
        a*=2
        b=4
        c=3
        return a+b+c
    
    a,b,c=0,1,5
    print(h(a),a,b,c)
    
except: print('error')
