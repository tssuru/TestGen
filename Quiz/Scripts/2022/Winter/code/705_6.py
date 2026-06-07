try:
    a,b,c=6,8,2
    def h(a):
        a=1
        b*=5
        c=2
        return a+b+c
    
    a,b,c=7,5,3
    print(h(a),a,b,c)
    
except: print('error')
