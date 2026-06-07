try:
    a,b,c=0,3,5
    def h(a):
        a=3
        b=2
        c=5
        return a+b+c
    
    a,b,c=9,4,6
    print(h(a),a,b,c)
    
except: print('error')
