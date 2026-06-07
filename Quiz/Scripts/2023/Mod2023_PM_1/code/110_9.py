try:
    a,b,c=1,5,2
    def h(a):
        a*=4
        b=2
        c=1
        return a+b+c
    
    a,b,c=6,4,0
    print(h(a),a,b,c)
    
except: print('error')
