try:
    a,b,c=2,3,3
    def h(a):
        a=4
        b=5
        c=1
        return a+b+c
    
    a,b,c=1,5,0
    print(h(a),a,b,c)
    
except: print('error')
