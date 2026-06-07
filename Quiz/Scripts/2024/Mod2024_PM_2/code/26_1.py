try:
    a,b,c=9,1,8
    def h(a):
        a=2
        b*=1
        c=2
        return a+b+c
    
    a,b,c=3,1,9
    print(h(a),a,b,c)
    
except: print('error')
