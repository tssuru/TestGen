try:
    a,b,c=3,2,5
    def h(a):
        a=4
        b=3
        c=2
        return a+b+c
    
    a,b,c=9,0,4
    print(h(a),a,b,c)
    
except: print('error')
