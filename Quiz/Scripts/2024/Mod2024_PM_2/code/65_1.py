try:
    a,b,c=5,4,3
    def h(a):
        a=1
        b=2
        c=5
        return a+b+c
    
    a,b,c=7,0,9
    print(h(a),a,b,c)
    
except: print('error')
